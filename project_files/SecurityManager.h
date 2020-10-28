//
// Created by rebecca on 10/28/20.
//

#ifndef MOBILE_BANKING_APP_SECURITYMANAGER_H
#define MOBILE_BANKING_APP_SECURITYMANAGER_H

#include <string>

using namespace std;

class SecurityManager {
public:
    SecurityManager() = default;
    SecurityManager(string question, string answer, bool digKey);

    const string& getQuestion() const;
    bool checkAnswer(const string& answer) const;
    bool isDigitalKey() const;
    void changeDigitalKey();
    void changeSecurityQuestion(string question, string answer);
    void serialize(const string& cname) const;
    static SecurityManager deserialize(const string& extractedPath);
private:
    bool digitalKey{false};
    pair<string,string> securityQuestion{make_pair("none", "none")};
};


#endif //MOBILE_BANKING_APP_SECURITYMANAGER_H
