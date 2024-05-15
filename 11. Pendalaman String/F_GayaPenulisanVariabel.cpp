#include <iostream>
#include <string>

using namespace std;
void convertToCamelCase(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
            if (i != 0) {
                s.insert(i, "_");
                i++;
            }
        }
    }
}

void convertToSnakeCase(string &s) {
    int ada=0;
	int dimana[255];
	string und="_";
	int panjang=s.length();
	int temudi=s.find(und);
	
	while((temudi>=0) && (temudi<panjang)) {
		dimana[ada]=temudi;
		ada++;
		s.erase(temudi,1);
		temudi=s.find(und);
		panjang=s.length();
	}
	
	for(int i=0; i<ada;i++) {
		if(!(dimana[i]>=s.length())) {
			s[dimana[i]]-=32;
		}
	}
}
int main() {
    string s;
    cin >> s;

     if((s.find("_")>=0) && ((s.find("_")<s.length()))){
        convertToSnakeCase(s);
    } else {
        convertToCamelCase(s);
    }

    cout << s << endl;

    return 0;
}
