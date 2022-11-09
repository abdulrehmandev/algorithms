bool permutation(string str1, string str2) {
	if (str1.length() != str2.length()) { // checking the length before hand
		return false;
	}

	int char_val = NULL;
	int characters1[128] = { 0 };	// total number of asciis to check
	int characters2[128] = { 0 };

	for (int i = 0; i < str1.length(); i++) {	// checking each character's presence
		char_val = int(str1[i]);
		characters1[char_val]++;
		char_val = int(str2[i]);
		characters2[char_val]++;
	}
	
	for (int i = 0; i < 128; i++) {	// comparing both character arrays
		if (characters1[i] != characters2[i]) {
			return false;
		}
	}
	return true;
}