class Solution {
public:
  int divide(int dividend, int divisor) {
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        unsigned int counter=1;
        unsigned int y;
        y = b;
      
      
       if(divisor==1 && dividend>0)
        {return dividend;}
        
        else if(divisor==-1 && dividend<0)
        {if(dividend!=-2147483648){
            return -(dividend);}
        else return -(dividend+1);
        }
        
        else if (divisor==1 && dividend<0)
        {return dividend;}
        
        else if (divisor==-1 && dividend>0)
        {return -(dividend);}
        else{
        if(dividend==divisor)
        {
            return 1;
        }
      
      
            else{
    

        
        if(divisor==1 && dividend>0)
        {return dividend;}
        
        else if(divisor==-1 && dividend<0)
        {if(dividend!=-2147483648){
            return -(dividend);}
        else return -(dividend+1);
        }
        
        else if (divisor==1 && dividend<0)
        {return dividend;}
        
        else if (divisor==-1 && dividend>0)
        {return -(dividend);}
        else{
        while(b<=a)
        {
            b=b+y;
            counter++;
        }
        if (dividend<0 && divisor>0 || divisor<0 && dividend>0)
        return -(counter-1);
        else
        return counter-1;
        }
 }}}
};