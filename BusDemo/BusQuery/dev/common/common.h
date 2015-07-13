#pragma once

#include <vector>
#include <string>

class INotification {
public:
	virtual void OnPropertyChange(const std::string& str) = 0;
};

class NotificationImpl {
public:
	std::vector<INotification *> & GetNotificationArray() throw(){    // ��֤�����쳣
		return m_array;
	}
	void AddNotification(INotification *p){
		m_array.push_back(p);
	}
private:
	std::vector<INotification *> m_array;
};

class ICommandEx {
public:
	virtual void Exec() = 0;
};