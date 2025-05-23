#include <iostream>     // terminal input and output classes and objects
#include <string>
class GPSCoord {
 private:
  double lat, lng, elv;  // latitude, longitude, elevation
 public:
  GPSCoord(double lat, double lng, double e = 0.0):
    lat(lat), lng(lng), elv(e) {}

  operator std::string() {
    // convert the three attributes to a string
    std::string value = std::to_string(lat) + ", " +
      std::to_string(lng) + ", " + std::to_string(elv);
    return value;
  }
  bool operator == (GPSCoord & obj) {
    // test whether two objects have same latitude and longitude
    return (lat == obj.lat && lng == obj.lng);
  }
};
int main() {
  GPSCoord point1(1.0,2.0,3.0), point2(1.0,2.0,4.0);
  // print out both points, and whether they overlap with the == operator
  std::cout << "point1: " << (std::string)point1 << '\n';
  std::cout << "point2: " << (std::string)point2 << '\n';
  std::cout << "point1 == point2: " << (point1 == point2) << '\n';
}
