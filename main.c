#include <stdio.h>
int twosum() {
	int i = 0;
	int b = 0;
	int j = b;
	int target = 5;
	int nums[3] = { 1,2,3 };
	int n = 2;
    int size = 3

	while ((nums[i] + nums[j] != target) || (i <=size) || (j<=size)) {
		while (nums[i] + nums[j] != target) {
			j+=1;
		}
		i+=1;
		b+=1;
		j = b;
	}
	int res[2] = { i, j };
	printf("%d", res[0]);
	printf("%d", res[1]);

}


int main(){

	twosum();
	return 0;

}
