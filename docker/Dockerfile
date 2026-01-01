# get base image
FROM python:3.8

# set a directory for the app
WORKDIR /usr/src/app

COPY . .
#first dot: source code location
#second dot: OS location (. = current directory = /usr/src/app)

#installing flask (not on our computer, but on the docker)
RUN pip install --no-cache-dir Flask
# --no-cache-dir: no installation cache
# with cache: next time pip install Flask, refer to the cache instead of redownloading Flask
# witout cache: next time pip install Flask, seek to redownloading Flask
# on docker cache is useless as docker will always use the image version and modifications will not be applied.

EXPOSE 5000

CMD ["python", "./app.py"]
