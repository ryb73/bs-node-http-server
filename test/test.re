let server = HttpServer.createServer [%bs.obj {
    root: "files/",
    cache: Js.Undefined.return 1
}];
server##listen 8080;
server##close ();

let server2 = HttpServer.createServer [%bs.obj {
    root: "files/",
    cache: Js.Undefined.empty
}];
server2##listen 8080;
server2##close ();