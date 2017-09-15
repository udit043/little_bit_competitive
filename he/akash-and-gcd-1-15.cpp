/**
 * In this code we have a very large array called arr, and very large set of operations
 * Operation #1: Increment the elements within range [i, j] with value val
 * Operation #2: Get max element within range [i, j]
 * Build tree: build_tree(1, 0, N-1)
 * Update tree: update_tree(1, 0, N-1, i, j, value)
 * Query tree: query_tree(1, 0, N-1, i, j)
 */

#include <iostream>
#include <algorithm>
using namespace std;

#include <string.h>
#include <math.h> 

#define N 3
#define MAX (1+(1<<6)) // Why? :D
#define inf 0x7fffffff

int arr[N];
int tree[MAX];

int gcd(int x)
{
	int res=0;
	for(int i=1; i<=x; i++)
		res += __gcd(i,x);
	return res;
}

/**
 * Build and init tree
 */
void build_tree(int node, int a, int b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = gcd(arr[a]); // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = tree[node*2]+tree[node*2+1];//max(tree[node*2], tree[node*2+1]); // Init root value
}

/**
 * Increment elements within range [i, j] with value value
 */
void update_tree(int node, int a, int b, int i, int j, int value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node] += value;
    		return;
	}

	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = tree[node*2]+tree[node*2+1];;//max(tree[node*2], tree[node*2+1]); // Updating root with max value
}

/**
 * Query tree to get max element value within range [i, j]
 */
int query_tree(int node, int a, int b, int i, int j) {
	
	if( j < a || i > b )//if(a > b || a > j || b < i) 
	{
		cout << "debug" << node << a << b << i << j << "\n";
		return -inf; // Out of range
	}

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];

	int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = q1+q2;//max(q1, q2); // Return final result
	
	return res;
}

int main() {
	//for(int i = 0; i < N; i++) arr[i] = 1;
	arr[0]=3;
	arr[1]=4;
	arr[2]=3;
	build_tree(1, 0, N-1);

	//update_tree(1, 0, N-1, 0, 6, 5); // Increment range [0, 6] by 5
	//update_tree(1, 0, N-1, 7, 10, 12); // Incremenet range [7, 10] by 12
	//update_tree(1, 0, N-1, 10, N-1, 100); // Increment range [10, N-1] by 100

	//cout << "hi" << query_tree(1, 0, N-1, 0, 2) << endl; // Get max element in range [0, N-1]
	cout << query_tree(1, 0, N-1, 0, 1) << endl;
	cout << query_tree(1, 0, N-1, 0, 2) << endl;
	cout << query_tree(1, 0, N-1, 1, 2) << endl;
}

/*	cout << "tree[0]" << tree[0] << "\n";
	cout << "tree[1]" << tree[1] << "\n";
	cout << "tree[2]" << tree[2] << "\n";
	cout << "tree[3]" << tree[3] << "\n";
	cout << "tree[4]" << tree[4] << "\n";
	cout << "tree[5]" << tree[5] << "\n";
	cout << "tree[6]" << tree[6] << "\n";
	cout << "tree[7]" << tree[7] << "\n";
	cout << "tree[8]" << tree[8] << "\n";
	cout << "tree[9]" << tree[9] << "\n";
	cout << "tree[10]" << tree[10] << "\n";
	cout << "tree[11]" << tree[11] << "\n";
	cout << "tree[12]" << tree[12] << "\n";
	cout << "tree[13]" << tree[13] << "\n";
	cout << "tree[14]" << tree[14] << "\n";
	cout << "tree[15]" << tree[15] << "\n";
	cout << "tree[16]" << tree[16] << "\n";*/

/*

#include <iostream>
#include <algorithm>
using namespace std;

#include <string.h>
#include <math.h> 

#define N 20
#define MAX (1+(1<<6)) // Why? :D
#define inf 0x7fffffff

int gcd(int x)
{
	int res=0;
	for(int i=1; i<=x; i++)
		res += __gcd(i,x);
	return res;
}

int arr[N];
int tree[MAX];

void build_tree(int node, int a, int b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = gcd(tree[node*2])+gcd(tree[node*2+1]);//max(tree[node*2], tree[node*2+1]); // Init root value
}

void update_tree(int node, int a, int b, int i, int j, int value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node] += value;
    		return;
	}

	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = gcd(tree[node*2])+gcd(tree[node*2+1]);//max(tree[node*2], tree[node*2+1]); // Updating root with max value
	cout <<tree[node] << "\n";
}

int query_tree(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return -inf; // Out of range

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];

	int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = q1+q2;//gcd(q1)+gcd(q2);//max(q1, q2); // Return final result
	
	return res;
}

int main() 
{
	arr[0]=3;
	arr[1]=4;
	arr[2]=3;
	cout << tree[0] << tree[1] << tree[2] << "\n";
	build_tree(1, 0, N-1);
	cout << tree[0] << tree[1] << tree[2] << "\n";
//	update_tree(1, 0, 2, 0, 0, 2); // Increment range [0, 6] by 5
//	cout << query_tree(1, 0, N-1, 0, N-1) << endl;
//	update_tree(1, 0, 3, 1, 1, 3); // Incremenet range [7, 10] by 12
//	cout << query_tree(1, 0, N-1, 0, N-1) << endl;
//	update_tree(1, 0, 2, 2, 2, 2); // Increment range [10, N-1] by 100
//	cout << query_tree(1, 0, N-1, 0, N-1) << endl; // Get max element in range [0, N-1]

	cout << query_tree(1, 0, N-1, 0, 1) << endl;
	cout << query_tree(1, 0, N-1, 0, 2) << endl;
	cout << query_tree(1, 0, N-1, 1, 2) << endl;

}*/