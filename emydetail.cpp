#include "emydetail.h"
#include <QDebug>

EmyDetail::EmyDetail(const QString&name, const QString &age, const QString &salary)
{
    m_name = name;
    m_age = age;
    m_salary = salary;

}

void EmyDetail::setName(const QString &name)
{
    m_name = name;
    qDebug()<<"Name is set"<<m_name;
}

void EmyDetail::setAge(const QString &age)
{
    m_age = age;
    qDebug()<<"Age is set"<<m_age;
}

void EmyDetail::setSalary(const QString &salary)
{
    m_salary = salary;
    qDebug()<<"Salary is set"<<m_salary;
}

QString EmyDetail::getName() const
{
    return m_name;
}

QString EmyDetail::getAge() const
{
    return m_age;
}

QString EmyDetail::getSalary() const
{
 return m_salary;
}
