#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
vector <bool> jan,feb_vis,feb,mart,april,may,june,july,august,sept,october,nov,december;
int vis,mon,fish,kol,n,day,month;
string s;
signed main()
{
    jan.reserve(31);
    feb_vis.reserve(29);
    feb.reserve(28);
    mart.reserve(31);
    april.reserve(30);
    may.reserve(31);
    june.reserve(30);
    july.reserve(31);
    august.reserve(31);
    sept.reserve(30);
    october.reserve(31);
    nov.reserve(30);
    december.reserve(31);
    cin>>vis;
    cin>>n;
    if(vis==1){
        for(int i=0;i<n;++i){
            cin>>s;
            day=((s[0]-'0')*10)+(s[1]-'0');
            month=((s[3]-'0')*10)+(s[4]-'0');
            switch (month){
            case 1: jan[day-1]=1;break;
            case 2: feb_vis[day-1]=1;break;
            case 3: mart[day-1]=1;break;
            case 4: april[day-1]=1;break;
            case 5: may[day-1]=1;break;
            case 6: june[day-1]=1;break;
            case 7: july[day-1]=1;break;
            case 8: august[day-1]=1;break;
            case 9: sept[day-1]=1;break;
            case 10: october[day-1]=1;break;
            case 11: nov[day-1]=1;break;
            case 12: december[day-1]=1;break;
            }
        }
        for(int i=0;i<jan.size();++i){
            if(jan[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<feb_vis.size();++i){
            if(feb_vis[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<mart.size();++i){
            if(mart[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<april.size();++i){
            if(april[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<may.size();++i){
            if(may[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<june.size();++i){
            if(june[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<july.size();++i){
            if(july[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<august.size();++i){
            if(august[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<sept.size();++i){
            if(sept[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<october.size();++i){
            if(october[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<nov.size();++i){
            if(nov[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<december.size();++i){
            if(december[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
    }
    else{
            for(int i=0;i<n;++i){
            cin>>s;
            day=((s[0]-'0')*10)+(s[1]-'0');
            month=((s[3]-'0')*10)+(s[4]-'0');
            switch (month){
            case 1: jan[day-1]=1;
            case 2: feb_vis[day-1]=1;
            case 3: mart[day-1]=1;
            case 4: april[day-1]=1;
            case 5: may[day-1]=1;
            case 6: june[day-1]=1;
            case 7: july[day-1]=1;
            case 8: august[day-1]=1;
            case 9: sept[day-1]=1;
            case 10: october[day-1]=1;
            case 11: nov[day-1]=1;
            case 12: december[day-1]=1;
            }
        }
        for(int i=0;i<jan.size();++i){
            if(jan[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<feb.size();++i){
            if(feb_vis[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<mart.size();++i){
            if(mart[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<april.size();++i){
            if(april[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<may.size();++i){
            if(may[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<june.size();++i){
            if(june[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<july.size();++i){
            if(july[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<august.size();++i){
            if(august[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<sept.size();++i){
            if(sept[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<october.size();++i){
            if(october[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<nov.size();++i){
            if(nov[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
        for(int i=0;i<december.size();++i){
            if(december[i]==1){
                switch(kol){
                    case 0:
                        fish+=1000;
                        kol++;
                        break;
                    case 1:
                        fish+=5000;
                        kol++;
                        break;
                    case 2:
                        fish+=3000;
                        kol++;
                        break;
                    case 3:
                        fish+=4000;
                        kol++;
                        break;
                    case 4:
                        mon+=3;
                        kol++;
                        break;
                    case 5:
                        kol=0;
                        break;
                }
            }
            else kol=0;
        }
    }
    cout<<fish<<" "<<mon;
    return 0;
}
