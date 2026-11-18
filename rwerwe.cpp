 #include <iostream>  
 #include <windows.h>  
 using namespace std;
 
  void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 void O(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(i==0 || j==0 || i==n-1 || j==n-1){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
 } 
 
  void C(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(i==0 || j==0 || i==n-1){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

  void G(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(i==0 || j==0 || i==n-1 || (i==n/2 && j>=n/2 || (i>=n/2 && j==n-1))){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}
 
  void L(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(j==0 || i==n-1){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

  void U(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(j==0 || i==n-1 || j==n-1){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

  void I(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(j==n/2){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

   void T(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(j==n/2 || i==0){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

  void S(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if((i==0) || (i<=n/2 && j==0) || (i==n/2 && j<n) || (i>=n/2 && j==n-1) || (i==n-1)){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

  void E(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(i==0 || j==0 || (i==n/2 && j<=n/2) || i==n-1){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

  void F(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(i==0 || j==0 || (i==n/2 && j<n)){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
}

 void B(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(i==0 || j==0 || i==n-1 || (i==n/2 && j<n) || j==n-1){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
 } 
 
  void A(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if(i==0 || j==0 || (i==n/2 && j<n) || j==n-1){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
 } 
 
  void H(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if((j==0) || (i<=n/2 && j==0) || (i==n/2 && j<n) || (i>=n/2 && j==n-1) || (j==n-1)){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
 } 
 
   void Z(int x,int y, int n){  
      int i, j;
	  for (i=0; i<n; i++){
	  	for(j=0; j<n; j++){
	  		if((i==0) || (i<=n/2 && j==n-1) || (i==n/2 && j<n) || (i>=n/2 && j==0) || (i==n-1)){
	  			gotoxy(x+j , y+i);
	  			cout<<"*";
			  }
		  }
	  }  
 } 




//Y=i  X=j

 int main(){ 
 int f, j;
 
      system("cls");
      gotoxy((80-6)/2,0);
      cout<<"MARCO!";
      for(f=0; f<4; f++){
      	gotoxy(5,2 + f);
      	for(j=0; j<6; j++){
      		cout<<(f==0 || f==3 || j=0 || j==5 ? "*" : " ");
		  }
	  }
	  gotoxy(0,7);
      return 0;  
 }  