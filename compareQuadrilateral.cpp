#include <iostream>
#include <string>
#include <cmath>

//Struct for a single point p(x,y)
struct point 
{
   double x;
   double y;
};

// class to hold points of a quadrilateral
// used composite class relationship because it is "has a " relaion
class Quad
{
   private:
   point p1,p2,p3,p4; // four points
   point array[4]={p1,p2,p3,p4}; // array of aforementioned points
   typedef long double size_t;
   public:
   Quad(){} // constructor

   // function to get all points of quadrilateral
   void enterPoints()
   {
     for(int i=0;i<4;i++)
     {
       std::cout<<"enter x of "<<i+1<<" point : ";
       std::cin>>array[i].x;
       std::cout<<"enter y of "<<i+1<<" point : ";
       std::cin>>array[i].y;
     }
   }

   //function to get x and y of single points (GETTER)
   void getPointsValue(int index)const noexcept
   {
     std::cout<<"("<<array[index].x<<" , "<<array[index].y<<")\n";
   }

   // these functions are to get indivisual x and y of a particular point
   void getValue_X(int index)const noexcept{return array[index].x;}
   void getValue_Y(int index)const noexcept{return array[index].y;}

   //function to set x and y of single points (SETTER)
   void setPointsValue(int index)
   {
     std::cout<<"enter x of "<<index+1<<" point : ";
     std::cin>>array[index].x;
     std::cout<<"enter y of "<<index+1<<" point : ";
     std::cin>>array[index].y;
   }

   // friend function to display all the points of a given quadrilateral
   friend std::ostream& operator<<(std::ostream& out,Quad& obj);
   // friend function to compare the two quadrilaterals
   // THIS IS THE FUNCTION WHICH CHECKS WHEATHER QUADRILATERALS OVERLAP OR NOT 
   friend std::string compare(Quad& obj1,Quad& obj2);

   long double perimeter()const noexcept // This function is for perimeter
   {
    size_t* ttr=new size_t[4];
    ttr[0]=line_distance(array[0].x,array[1].x, array[0].y, array[1].y);
    ttr[1]=line_distance(array[1].x,array[2].x, array[1].y, array[2].y);
    ttr[2]=line_distance(array[2].x,array[3].x, array[2].y, array[3].y);
    ttr[3]=line_distance(array[3].x,array[1].x, array[3].y, array[1].y);
    size_t temp=ttr[0]+ttr[1]+ttr[2]+ttr[3];
    delete[] ttr;
    ttr=std::nullptr;
    return (temp);
   }
   
   // This function is for length of a line 
   inline size_t line_distance(int x1=0,int x2=0,int y1=0,int y2=0)
   {
     return(sqrtl(powl(abs(x2-x1),2)+powl(abs(y2-y1),2)));
   }
};

std::ostream& operator<<(std::ostream& out,Quad& obj)
{
  out<<"points are : \n";
  for(int i=0;i<4;i++)
  {
    out<<"("<<obj.array[i].x<<" , "<<obj.array[i].y<<")\n";
  }
  return out;
}

std::string compare(Quad& obj1,Quad& obj2)
{
  std::string warning{"There is NO OVERLAP between these two Quadrilaterals\n"};
  if(obj1.array[0].x<=obj2.array[0].x && obj1.array[0].y<=obj2.array[0].y)
  {
    if(obj1.array[1].x<=obj2.array[1].x && obj1.array[1].y>=obj2.array[1].y)
    {
      if(obj1.array[2].x>=obj2.array[2].x && obj1.array[2].y>=obj2.array[2].y)
      {
        if(obj1.array[3].x>=obj2.array[3].x && obj1.array[3].y<=obj2.array[3].y)
        {
          std::string success{"There is OVERLAP between these two Quadrilaterals\n"};
          return success;
        }
        return warning;
      }
      return warning;
    }
    return warning;
  }
  return warning;
}

int main() 
{
  Quad q1;
  Quad q2;
  
  q1.enterPoints();
  std::cout<<q1.perimeter()<<" sq unit"<<std::endl;
  q2.enterPoints();
  
  std::cout<<compare(q1,q2);
  return 0;
}
