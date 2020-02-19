#include<iostream> // for testing
#include<ostream>
#include<type_traits>

//bool operator==(const Date& lhs, const Date& rhs);
//bool operator!=(const Date& lhs, const Date& rhs);


enum class month_ {january=1, february, march, april, may, june, july, august, september, october, november, december};

class Date {
  int day;
  month_ month;
  int year;
  int month_n(month_ month);
  void set_dm(const unsigned n); 

 public:
  Date(){};
  Date(int day1, month_ month1, int year1)/*{}*/;
  int Day() const { return day;}
  month_ Month() const { return month;}
  int Year() const { return year;}
  void add_days(unsigned int n);
};

Date::Date(int day1, month_ month1, int year1)
        :  day{day1},
           month{month1},
           year{year1}
{}


int Date::month_n(month_ month){
     unsigned int k;
     switch (month){
             case month_::february:
                  k = 28;
                  break;
             case month_::april: case month_::june: case month_::september: case month_::november:
                  k = 30;
                  break;
             case month_::january: case month_::march: case month_::may: case month_::july:
             case month_::august: case month_::october: case month_::december:
                  k = 31;
                  break;}
     return k;
}


//int is_last_day_month
//int is_last_day_year
/*int outof365(Date date){
    int k{0};
    for (unsigned int i = 0 ; date.month != month_(i) ; i++ ) {
         k += month_n(month_(i));
    k += date.day;
    return k;
}*/
         /*r = (date.day + n) % month_n;
         if ((date.day + n) % month_n(date) == date.day + n) {date.day = date.day + n};
         else {date.day };*/


void Date::set_dm(const unsigned n){
      unsigned int k{n};
      if(day + n <= month_n(month)){day += n;}
      else {
            unsigned int i=1;
            k -= month_n(month) - day;
            while(k > month_n(month_(int(month)+i))){
                  k -= month_n(month_(int(month)+i));
                  i++;
                                                     }
           day = k;
           month = month_(int(month)+i);
           }
}

void Date::add_days(unsigned int n){
         if(n/365 == 0){ Date::set_dm(n);}
         else {
              year += n/365;
              n %= 365;
              Date::set_dm(n);
              }
}

bool operator==(const Date& lhs, const  Date& rhs){
                return lhs.Year()==rhs.Year()
                && lhs.Month()==rhs.Month()
                && lhs.Day()==rhs.Day();}
bool operator!=(Date& lhs, Date& rhs){
                return !(lhs==rhs);}
std::ostream& operator<<(std::ostream& os, const Date& d){
                         return os<<'('<<d.Day()
                                  <<','<<int(d.Month()) // how to get name of the month?
                                  <<','<<d.Year()<<')';}

//  <<','<< static_cast<std::underlying_type<month_>::type>(d.Month())

int main() {
 //Date d;
 Date d {13, month_::february, 2020};
 std::cout << "d:" << d << std::endl;
}
