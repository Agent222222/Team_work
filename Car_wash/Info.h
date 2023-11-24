#pragma once
#include <iostream>
#include<vector>

class CInfo;
std::vector<CInfo>dayInfo;

class CInfo
{
private:
    std::string fName;
    std::string procedure;
    std::string startTime;
    std::string endTime;
    std::string date;

public:

    CInfo(std::string fName_inpt, std::string startTime_inpt, std::string endTime_inpt, std::string date_inpt) {
        fName = fName_inpt;
        startTime = startTime_inpt;
        endTime = endTime_inpt;
        date = date_inpt;
    }

    void setName(const std::string& name)
    {
        fName = name;
    }
    void setProcedure(const std::string& action)
    {
        procedure = action;
    }
    void setStartTime(const std::string& start)
    {
        startTime = start;
    }
    void setEndTime(const std::string& end)
    {
        endTime = end;
    }
    void setDate(const std::string& date_)
    {
        date = date_;
    }





    const std::string& getName() const
    {
        return fName;
    }
    const std::string& getProcedure()const
    {
        return procedure;
    }
    const std::string& getStartTime()const
    {
        return startTime;
    }
    const std::string& getEndTime()const
    {
        return endTime;
    }
    const std::string& getDate()const
    {
        return date;
    }

    System::String^ GetProperty(const int index) const { 
        switch (index) {
        case 0:
            return msclr::interop::marshal_as<System::String^>(fName);
            break;

        case 1:
            return msclr::interop::marshal_as<System::String^>(procedure);
            break;

        case 2:
            return msclr::interop::marshal_as<System::String^>(startTime);
            break;

        case 3:
            return msclr::interop::marshal_as<System::String^>(endTime);
            break;

        case 4:
            return msclr::interop::marshal_as<System::String^>(date);
            break;

        default:
            return "";
        }
    }

    friend std::istream& operator>>(std::istream& is, CInfo& worker) {
        is >> worker.fName >> worker.procedure >> worker.startTime
            >> worker.endTime >> worker.date;
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const CInfo& worker)
    {
        os << worker.fName << " " << worker.procedure << " "
            << worker.startTime << " " << worker.endTime << " " << worker.date << std::endl;
        return os;
    }
};