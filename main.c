#include <stdio.h>
int twosum() {
	int i = 0;
	int b = 1;
	int j = b;
	int target = 5;
	int nums[3] = { 1,2,3 };
    int size = 3;

	while ((nums[i] + nums[j] != target) && (i <size) && (j<size)) {
		while ((nums[i] + nums[j] != target) && (i <size) && (j<size)) {
			j+=1;

		}
		i+=1;
		b+=1;
		j = b;
	}
	int res[2] = { nums[i], nums[j] };
	printf("%d %d" , res[0], res[1]);
	//printf("%d", nums[j]);

}


int main(){

	twosum();
	return 0;

}
