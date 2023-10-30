int makeBeautiful(string str) {
      int count=0,count1=0;
      string s01="";
      string s10="";

      for(int i=0;i<str.size();i++){
        if(i%2==0){
          s01=s01+'0';
          s10=s10+'1';
        }
        else{
          s01=s01+'1';
          s10=s10+'0';
        }

        if(str[i]!=s01[i]){
          count=count+1;
        }
        if(str[i]!=s10[i]){
          count1=count1+1;
        }
      }
      return min(count,count1);

}