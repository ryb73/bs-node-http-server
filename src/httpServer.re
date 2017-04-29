type options = [%bs.obj:
    {.
        root: string,
        cache: Js.undefined int
        /*logFn: Js.undefined (string => string => option string => unit)*/
    }
];

class type server = {
    pub listen: int => unit;
    pub close: unit => unit;
} [@bs];

external createServer : options => Js.t server = "createServer" [@@bs.module "http-server"];