/* a program to use binary search for given integer find sqrt of x if not perfect sqrt return floor of sqrt of given number*/

#include <stdio.h> 

 int main()
{ 
int x;
scanf("%d",&x);
    
int binary(int n) 
{ 
    int start = 0, end = n; 
    int mid; 
  int ans; 
  
    
    while (start <= end) 
	{ 
        mid = (start + end) / 2; 
        if (mid * mid == n) 
	{ 
            ans = mid; 
            break; 
        } 
  
       
        if (mid * mid < n)
	 { 
            start = mid + 1; 
            ans = mid; 
        } 
  
       
        else { 
            end = mid - 1; 
        	}	 
    } 
  
 return ans; 
 }
  
printf("%d\n",binary(x)); 
  
} 
