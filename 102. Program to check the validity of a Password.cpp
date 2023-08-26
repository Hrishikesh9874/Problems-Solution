bool check(string &str){
	string temp="";
	int count=0;
	
	for(int i=0; i<10; i++){
		temp=to_string(i);
		auto find=str.find(temp);
		if(find != string::npos){
			count=1;
			break;
		}
	}
	if(count != 1){
		return 0;
	}

	count=0;
	//check lowercase
	for(int i=0; i<str.length(); i++){
		if(str[i]>='a' && str[i]<='z'){
			count=1;
			break;
		}
	}
	if(count != 1){
		return 0;
	}

	count=0;
	//check uppercase
	for(int i=0; i<str.length(); i++){
		if(str[i]>='A' && str[i]<='Z'){
			count=1;
			break;
		}
	}
	if(count != 1){
		return 0;
	}

	count=0;
	//check sign
	for(int i=0; i<str.length(); i++){
		if((str[i]>=33 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=126)){
		    count=1;
			break;
		}
	}
	if(count != 1){
		return 0;
	}

	if(str.find(" ") != string::npos){
		return 0;
	}
	return 1;
	
}
bool isValid(string &str)
{
	// Write your code here.
	if(str.empty()){
		return 1;
	}
	if(str.length()>=8 && str.length()<=15){
		// check(str);
		if(check(str)){
			return 1;
		}
	}
	
	return 0;
}
