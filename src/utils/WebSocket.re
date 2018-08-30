module type WebSocketType = {
  type t;
  let make: string => t;
  let makeWithProtocols: (string, ~protocols: list(string)) => t;
};

module WebSocketMaker = (Maker: WebSocketType) => {
  type t = Maker.t;
  let make = Maker.make;
  let makeWithProtocols = (url, ~protocols: list(string)) =>
    Maker.makeWithProtocols(url, ~protocols);
};

module WebSocketBrowser = {
  type t;

  [@bs.new] external make: string => t = "WebSocket";
  [@bs.new]
  external makeWithProtocols: (string, ~protocols: list(string)) => t =
    "WebSocket";
};

module WebSocket = WebSocketMaker(WebSocketBrowser);
