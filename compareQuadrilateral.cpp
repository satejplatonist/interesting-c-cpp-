#include <iostream>
#include <string>

//Struct for a single point p(x,y)
struct point 
{
   int x;
   int y;
};

// class to hold points of a quadrilateral
// used composite class relationship because it is "has a " relaion
class Quad
{
   private:
   point p1,p2,p3,p4; // four points
   point array[4]={p1,p2,p3,p4}; // array of aforementioned points
   
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
     std::cout<<"("<<obj.array[index].x<<" , "<<obj.array[index].y<<")\n";
   }
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
  q2.enterPoints();
  
  std::cout<<compare(q1,q2);
  return 0;
}
