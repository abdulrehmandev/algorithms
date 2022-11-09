
string urlify(string str) {
	string temp;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			int j;
			for (j = i; j < str.length(); j++) {
				if (str[j] != ' ') {
					temp += "%20";
					break;
				}
			}
			if (j == str.length() - 1) {
				return temp;
			}
		}
		else {
			temp += str[i];
		}
	}
	return temp;
}