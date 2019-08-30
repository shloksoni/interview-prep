int h = letters.size()-1;
    	int l = 0;
    	while(l<h) {
    		int m = (h + l)/2;
    		if(letters[m] > target) h = m;
    		else l = m + 1;
		}
		return (letters[l] > target ? letters[l] : letters[0]);