#pragma once
#include <iostream>
#include<vector>
using namespace std;
class CInfo;
vector<CInfo>dayInfo;

class CInfo
{
private:
    string wName;
    string wSurname;
    string procedure;
    string startTime;
    string endTime;
    string date;
    string number;
public:
    void setName(const string& name)
    {
        wName = name;
    }
    void setSurname(const string& surname)
    {
        wSurname = surname;
    }
    void setProcedure(const string& action)
    {
        procedure = action;
    }
    void setStartTime(const string& start)
    {
        startTime = start;
    }
    void setEndTime(const string& end)
    {
        endTime = end;
    }

    void setDate(const string& date_)
    {
        date = date_;
    }
    void setNumber(const string& number_)
    {
        number = number_;
    }





    const string& getName() const
    {
        return wName;
    }
    const string& getSurname()const
    {
        return wSurname;
    }
    const string& getProcedure()const
    {
        return procedure;
    }
    const string& getStartTime()const
    {
        return startTime;
    }
    const string& getEndTime()const
    {
        return endTime;
    }

    const string& getDate()const
    {
        return date;
    }
    const string& getNumber()const
    {
        return number;
    }

    friend std::istream& operator>>(std::istream& is, CInfo& worker) {
        is >> worker.wName >> worker.wSurname >> worker.procedure >> worker.startTime
            >> worker.endTime >> worker.date >> worker.number;
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const CInfo& worker)
    {
        os << worker.wName << " " << worker.wSurname << " " << worker.procedure << " "
            << worker.startTime << " " << worker.endTime << " " << worker.date << " "
            << worker.number;
        return os;
    }
};