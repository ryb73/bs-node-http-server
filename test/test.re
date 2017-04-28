let server = HttpServer.createServer [%bs.obj { root: "files/" } ];
server##listen 8080;
server##close ();