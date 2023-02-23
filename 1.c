void setup(){
  
    String test = "Den laks skal ned";
    printIfPalindrome(test);
    
  }
  
  void printIfPalindrome(String input) {
    boolean a=true;
    String temp = input.toUpperCase();
    for(int i=temp.length()-1; i>=0; i--) {
      println(i);
      a= (temp.charAt(temp.length()-i-1)==temp.charAt(i)) && a;
      println(a);
      
    }
    
    if(true==a) {
      println(input);
      
    }
  }