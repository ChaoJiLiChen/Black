//
//  main.cpp
//  map
//
//  Created by Chen on 2019/7/17.
//  Copyright © 2019 Chen. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

string cardNetNo(string strsouth);

int main(int argc, const char * argv[]) {

    string result =  cardNetNo("C9C2CEF7C9C2CEF7");
    cout <<"result:"<<result<<endl;
    
    
    
    return 0;
}


string cardNetNo(string strsouth)
{
    string netNo = "";
    static map<string, string> cardStrsouth;
    
    cardStrsouth[string("b1b1bea9b1b1bea9")] = "11";//北京速通科技有限公司
    cardStrsouth[string("ccecbdf2ccecbdf2")] = "12";//天津发行
    cardStrsouth[string("BAD3B1B1BAD3B1B1")] = "13";//河北省高速公路管理局指挥调度中心
    cardStrsouth[string("C9BDCEF7C9BDCEF7")] = "14";//山西省交通信息通信公司不停车收费运营服务中心
    cardStrsouth[string("C4DAC3C9C4DAC3C9")] = "15";//内蒙古自治区高速公路联网收费结算管理服务中心
    cardStrsouth[string("C1C9C4FEC1C9C4FE")] = "21";//辽宁省高速公路管理局ETC发行
    cardStrsouth[string("BCAAC1D6BCAAC1D6")] = "22";//吉林省高速公路电子收费运营服务中心
    cardStrsouth[string("C1FABDADC1FABDAD")] = "23";//黑龙江运营管理中心
    cardStrsouth[string("C9CFBAA3B9ABC2B7")] = "31";//上海公共交通卡股份有限公司
    cardStrsouth[string("BDADCBD5BDADCBD5")] = "32";//江苏省高速公路联网营运管理中心
    cardStrsouth[string("D5E3BDADD5E3BDAD")] = "33";//浙江省公路管理局
    cardStrsouth[string("B0B2BBD5B0B2BBD5")] = "34";//安徽省高速公路联网运营有限公司
    cardStrsouth[string("B8A3BDA8B8A3BDA8")] = "35";//福建省高速公路有限责任公司
    cardStrsouth[string("bdadcef7bdadcef7")] = "36";//江西省高速公路联网管理中心
    cardStrsouth[string("c9bdb6abc9bdb6ab")] = "37";//山东发行
    cardStrsouth[string("bad3c4cfbad3c4cf")] = "41";//河南发行
    cardStrsouth[string("BAFEB1B1BAFEB1B1")] = "42";//湖北省高速公路联网收费中心电子收费运营中心
    cardStrsouth[string("BAFEC4CFBAFEC4CF")] = "43";//湖南发行
    cardStrsouth[string("B9E3B6ABB9E3B6AB")] = "44";//广东联合电子服务股份有限公司
    cardStrsouth[string("B9E3CEF7B9E3CEF7")] = "45";//广西捷通发行
    cardStrsouth[string("d6d8c7ecd6d8c7ec")] = "50";//重庆通渝科技有限公司
    cardStrsouth[string("CBC4B4A8CBC4B4A8")] = "51";//四川省交通运输厅高速公路监控结算中心
    cardStrsouth[string("B9F3D6DDB9F3D6DD")] = "52";//贵州省发行方
    cardStrsouth[string("D4C6C4CFD4C6C4CF")] = "53";//云南省高速公路联网管理中心
    cardStrsouth[string("C9C2CEF7C9C2CEF7")] = "61";//陕西高速公路电子收费有限公司
    cardStrsouth[string("B8CACBE0B8CACBE0")] = "62";//甘肃省高速公路管理局
    cardStrsouth[string("c7e0baa3c7e0baa3")] = "63";//青海高管局发行方
    cardStrsouth[string("C4FECFC4C4FECFC4")] = "64";//宁夏发行方
    cardStrsouth[string("D0C2BDAED0C2BDAE")] = "65";//新疆维吾尔自治区公路收费（联网）管理中心
    cardStrsouth[string("BEFCB3B5BEFCB3B5")] = "05";//军车发行
    
    
    

    map<string, string>::iterator iter=cardStrsouth.find(strsouth);
    if(iter != cardStrsouth.end()){
        netNo = iter->second;
    }else{
        cout<<"Do not found"<<endl;
    }
    
    return netNo;
}
