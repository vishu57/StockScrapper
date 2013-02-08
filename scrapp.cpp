class StockData{


public:
     string stock_vector[80];
    
};

std::map< string, StockData* > mymap;





void splitlines(std::string & s )
{
  std::stringstream iss(s); 
  int i=0;

  std::string line1;
  while ( i < 1)
  {
    int counter = 0;
    std::getline(iss,line1,'\n');
    std::string token;
    std::istringstream ss(line1);
    while(std::getline(ss, token, ',') )
    {
      if(counter == 0)
      {
        mymap.insert(pair< string, StockData* > (token.substr(1,token.size()-2), new StockData)); 
      }
     mymap[token.substr(1,token.size()-2)]->stock_vector[2] = token;
      counter++;
    }
    
    
    i++;
   // cout<<vex[0];
  }
}