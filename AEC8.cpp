#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main() {
int x, y, s, t;
cin >> x >> y >> s >> t;
int p, d;
// p is horizontal distance, d is the max distance horizontally or vertically
p = t - (y - 1);
if(s + 1 < p) {
d = s + 1;
}
else {
d = p;
}
int count = 0;
for(int i = y; i <= y + d - 1; i++) {
if( (t + 1 - x - i) < (s + 1) && (t + 1 - x - i) > 0) {
count+= t + 1 - x - i;
}
else if(t + 1 - x - i >= s + 1) {
count+= s + 1;
}
else {
count+= 0;
}
}
cout << count;
return 0;
}

