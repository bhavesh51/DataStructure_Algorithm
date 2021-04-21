urls = []
for i in range(0,9999):
    urls.append('http://www.vatvaassociation.org/?page_id=2084&id={}'.format(i))

for url in urls:
    print(url)
    