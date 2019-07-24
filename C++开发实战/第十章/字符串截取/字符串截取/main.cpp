#include <stdio.h>

#include <string.h>



int main()

{
    
char *src = "........select distinct guiydh from bgydl a,pdsdl b  where faredm = :FRDM_BGYDL and jiaoym='7301'..........;";
    
char dest[100] = {0};
    
char *p1, *p2;
    
p1 = strstr(src, "from ");
    
p2 = strstr(src, " where");
    
    
    
if (p1 == NULL || p2 == NULL || p1 > p2)
{
printf("Not found\n");
}
else
{
    memcpy(dest, p1,p2 - p1+ 4);
    printf("%s\n", dest);
            
}
    
return 0;
    
}
