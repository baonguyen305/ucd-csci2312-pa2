//
// Created by BaoNguyen305 on 9/19/2015.
//

#include "Point.h"
#include <cmath>

Clustering::Point::Point(int i) {
    dim = 0;
}

Clustering::Point::Point(int i, double *pDouble) {
    dim = i;
    *values = *pDouble;
}

Clustering::Point::Point(const Clustering::Point &point) {

}

Clustering::Point &Clustering::Point::operator=(const Clustering::Point &point) {
    return *values;
}

Clustering::Point::~Point() {

}

void Clustering::Point::setValue(int i, double d) {
    dim = i;
    *values = d;
}

double Clustering::Point::getValue(int i) const {
    return i;
}

double Clustering::Point::distanceTo(const Clustering::Point &point) const {
    return sqrt(pow(point.getValue(*values)-(dim),2));
}

Clustering::Point &Clustering::Point::operator*=(double d) {
    return d *= 2;
}

Clustering::Point &Clustering::Point::operator/=(double d) {
    return d /= 2.0;
}

const Clustering::Point Clustering::Point::operator*(double d) const {
    d = d*3;
    return d;
}

const Clustering::Point Clustering::Point::operator/(double d) const {
    d = d/2;
    return d;
}

friend Clustering::Point &Clustering::operator+=(Clustering::Point &point, const Clustering::Point &point1) {
    point += point1;
    return point;
}

friend Clustering::Point &Clustering::operator-=(Clustering::Point &point, const Clustering::Point &point1) {
    point -= point1;
    return point;

}

friend const Clustering::Point Clustering::operator+(const Clustering::Point &point, const Clustering::Point &point1) {
    return point + point1;

}

friend const Clustering::Point Clustering::operator-(const Clustering::Point &point, const Clustering::Point &point1) {
    return point - point1;
}



friend bool Clustering::operator==(const Clustering::Point &point, const Clustering::Point &point1) {
    return point == point1;
}

friend bool Clustering::operator!=(const Clustering::Point &point, const Clustering::Point &point1) {
    return !(point == point1);
}



friend bool Clustering::operator<(const Clustering::Point &point, const Clustering::Point &point1) {
    return point < point1;
}

friend bool Clustering::operator>(const Clustering::Point &point, const Clustering::Point &point1) {
    return point > point1;
}

friend bool Clustering::operator<=(const Clustering::Point &point, const Clustering::Point &point1) {
    return point <= point1;
}

friend bool Clustering::operator>=(const Clustering::Point &point, const Clustering::Point &point1) {
    return point >= point1;
}

friend std::ostream &Clustering::operator<<(std::ostream &ostream, const Clustering::Point &point) {
    ostream << point;
    return ostream;
}

friend std::istream &Clustering::operator>>(std::istream &istream, Clustering::Point &point) {
    istream >> point;
    return istream;
}
