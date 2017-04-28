type options = [%bs.obj:
    {.
        root: string,
        cache: option int
    }
];

class type server = {
    pub listen: int => unit;
    pub close: unit => unit;
} [@bs];

external createServer : options => Js.t server = "createServer" [@@bs.module "http-server"];