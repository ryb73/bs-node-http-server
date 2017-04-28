type options = [%bs.obj:
    {.
        root: string
    }
];

class type server = {
    pub listen: int => unit;
    pub close: unit => unit;
} [@bs];

external createServer : options => Js.t server = "createServer" [@@bs.module "http-server"];