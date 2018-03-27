#ifndef TVECTOR_H
#define TVECTOR_H

#include<cmath>

const double eps = 0.0000000001;

class TVector{

public:
    double x, y;

    TVector(double x_, double y_) {
        x = x_; y = y_;
    }

    TVector() : x(0), y(0){}

    TVector operator+ (TVector p) const {

		return TVector(x+p.x, y+p.y);
	}

	TVector operator- (TVector p) const {
		return TVector(x-p.x, y-p.y);
	}

	double operator* (TVector p) const {
		return x * p.x + y * p.y;
	}

	TVector operator* (double scalar) const {
		return TVector(x*scalar, y*scalar);
	}

	friend TVector operator*(const double& scalar, const TVector& p){
	    return TVector(p.x*scalar, p.y*scalar);
	}

    double operator^ (TVector p) const {
		return x * p.y - y * p.x;
	}

    bool isZero(double x){
        return std::abs(x)<eps;
    }

    bool operator==(const TVector& p) {
        return isZero(x-p.x) && isZero(y-p.y);
    }


};

#endif
