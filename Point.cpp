//
// Created by BaoNguyen305 on 9/19/2015.
//

#include "Point.h"

Clustering::Point::Point(int i) {

}

Clustering::Point::Point(int i, double *pDouble) {

}

Clustering::Point::Point(const Clustering::Point &point) {

}

Clustering::Point &Clustering::Point::operator=(const Clustering::Point &point) {
    return <#initializer#>;
}

Clustering::Point::~Point() {

}

void Clustering::Point::setValue(int i, double d) {

}

double Clustering::Point::getValue(int i) const {
    return 0;
}

double Clustering::Point::distanceTo(const Clustering::Point &point) const {
    return 0;
}

Clustering::Point &Clustering::Point::operator*=(double d) {
    return <#initializer#>;
}

Clustering::Point &Clustering::Point::operator/=(double d) {
    return <#initializer#>;
}

const Clustering::Point Clustering::Point::operator*(double d) const {
    return Clustering::Point(0);
}

const Clustering::Point Clustering::Point::operator/(double d) const {
    return Clustering::Point(0);
}

Clustering::Point &Clustering::operator+=(Clustering::Point &point, const Clustering::Point &point1) {
    return <#initializer#>;
}

Clustering::Point &Clustering::operator-=(Clustering::Point &point, const Clustering::Point &point1) {
    return <#initializer#>;
}

const Clustering::Point Clustering::operator+(const Clustering::Point &point, const Clustering::Point &point1) {
    return Clustering::Point(0);
}

const Clustering::Point Clustering::operator-(const Clustering::Point &point, const Clustering::Point &point1) {
    return Clustering::Point(0);
}



bool Clustering::operator==(const Clustering::Point &point, const Clustering::Point &point1) {
    return false;
}

bool Clustering::operator!=(const Clustering::Point &point, const Clustering::Point &point1) {
    return false;
}



bool Clustering::operator<(const Clustering::Point &point, const Clustering::Point &point1) {
    return false;
}

bool Clustering::operator>(const Clustering::Point &point, const Clustering::Point &point1) {
    return false;
}

bool Clustering::operator<=(const Clustering::Point &point, const Clustering::Point &point1) {
    return false;
}

bool Clustering::operator>=(const Clustering::Point &point, const Clustering::Point &point1) {
    return false;
}

std::ostream &Clustering::operator<<(std::ostream &ostream, const Clustering::Point &point) {
    return <#initializer#>;
}

std::istream &Clustering::operator>>(std::istream &istream, Clustering::Point &point) {
    return <#initializer#>;
}
