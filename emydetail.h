#ifndef EMYDETAIL_H
#define EMYDETAIL_H
#include <QString>

class EmyDetail
{
public:
    EmyDetail(const QString&name = " ", const QString &age = " ", const QString &salary = " ");
    void setName(const QString& name);
    void setAge(const QString& age);
    void setSalary(const QString& salary);

    QString getName()const;
    QString getAge()const;
    QString getSalary()const;

private:
    QString m_name;
    QString m_age;
    QString m_salary;

};

#endif // EMYDETAIL_H
