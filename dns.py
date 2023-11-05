

ip_url_mapping={
    "192.3.4.5":"google.com",
    "123.45.6.5":"yahoo.com",
    "156.22.3.4":"redit.com"
}

def ip_to_url(ip):
    return ip_url_mapping.get(ip)
    
def url_to_ip(url):
    for i,u in ip_url_mapping.items():
        if ip_url_mapping[i] == url:
            return i
    return "no url found"        
    
while True:
    userInput1=input("enter url")
    if userInput1=="exit":
        break
    print(url_to_ip(userInput1))
    userInput2=input("enter ip")
    if userInput2=="exit":
        break
    print(ip_to_url(userInput2))
