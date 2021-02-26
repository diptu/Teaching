#include "complex.h"

Complex::Complex (float r, float i){
  real_ = r;
  imaginary_ = i;
}

Complex Complex::operator= (const Complex& rhs){
    real_ = rhs.real_;
    imaginary_ = rhs.imaginary_;
    return *this;
}

Complex Complex::operator+ (const Complex& rhs) const{
    Complex result = *this;
    result.real_ += rhs.real_;
    result.imaginary_ += rhs.imaginary_;
    return result;
}

Complex Complex::operator- (const Complex& rhs) const{
    Complex result = *this;
    result.real_ -= rhs.real_;
    result.imaginary_ -= rhs.imaginary_;
    return result;
}

Complex Complex::operator* (const Complex& rhs) const{
    Complex result = *this; // this-> == *this == (*this)
    result.real_ = real_ * rhs.real_ - imaginary_ * rhs.imaginary_;
    //cout << result.real_ << "R " << result.imaginary_ << "I "<< "|" << rhs.real_ << "R " << rhs.imaginary_ << "I\n";
    result.imaginary_ = (real_ * rhs.imaginary_) + (rhs.real_ * imaginary_);
    //cout << result.real_ << "R " << result.imaginary_ << "I "<< "|" << rhs.real_ << "R " << rhs.imaginary_ << "I\n";
    return result;
}

string Complex::toString() const {
  stringstream ss;
  if (imaginary_ > 0){
    ss << real_ << " + " << imaginary_ << "i";
  }
  else {
    ss << real_ << " " << imaginary_ << "i";
  }
  return ss.str();
}
