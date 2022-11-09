bool isUnique(string str) {
	if (str.length() > 128) {	//string with length more than 128 means the characters repeat.
		return false;
	}

	bool charset[128] = { false };	// array of bool which will tell if character repeat or not
	for (int i = 0; i < str.length(); i++) {
		int char_val = int(str[i]);
		if (charset[char_val] == true) {
			return false;
		}
		charset[char_val] = true;
	}
	return true;
}