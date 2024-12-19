#include<bits/stdc++.h>
using namespace std;

class Point{
	private:
		double x, y;
	public:
		Point(){};
		void nhap(){
			cin >> x >> y;
		}
		double getX(){
			return x;
		}
		double getY(){
			return y;
		}
};

double dist(Point a, Point b){
	double d = sqrt((a.getX() - b.getX())*(a.getX() - b.getX()) + (a.getY() - b.getY())*(a.getY() - b.getY()));
	return d;
}


int main(){
	int n;
	cin >> n;
	Point ds[n];
	for(int i = 0; i < n; i++){
		ds[i].nhap();
	}
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << fixed << setprecision(2) <<  dist(ds[i], ds[j]);
			if(j < n - 1) cout << ' ';
		}
		cout << endl;
	}
	return 0;
}