#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

bool iscorrect(int list[], int n, int m, int less)
{
	int sr = 1;
	int pp = 0;
	int r=0;
	while(r<n){
		if (list[r] > less)
			return false;
		if (pp + list[r] > less) {
			sr++;
			pp = list[r];
			if (sr > m)
				return false;
		}
		else
			pp += list[r];
		r++;
	}
	return true;
}


int books(int list[], int n, int m)
{
	long long addd = 0;
	if (n < m)
		return -1;
	int xmm = list[0] ;
	for (int i = 0; i < n; i++){
	addd += list[i];
	xmm = (list[i] > xmm ? list[i] : xmm) ;
	}
	int upp = xmm, last = addd;
	int answer = INT_MAX;
	while (upp <= last) {
		
		int middle = (upp + last) / 2;
		if (iscorrect(list, n, m, middle)) {
			answer = middle;
			last = middle - 1;
		}
		else
			upp = middle + 1;
	}
	return answer;
}

int main()
{
    int n, m;
    scanf("%d", &n);
    int list[n];
    for (int o = 0; o < n; o++) {
        scanf("%d ", &list[o]);
    }
    scanf("%d",&m);
    int answer = books(list, n, m);
    if (answer == -1) 
    {
        printf("A valid assignment is not possible\n");
    } 
    else
    {
        printf("The minimum value of the maximum number of pages allocated to a student is %d",answer);
    }
    return 0;	
}
 