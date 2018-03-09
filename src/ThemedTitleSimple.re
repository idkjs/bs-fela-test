/* let theme = {"fontColor": "green", "fontSize": "30px"}; */
let title = props => {
  Js.log(props);
  BsCssCore.Css.(
    style([
      fontSize(px(props##theme##fontSize)),
      color(props##theme##fontColor),
    ])
  );
};

/*
 Js.log output

 {…}
 as: undefined
 id: undefined
 theme: {…}
 colors: Object { black: "#000", blue: "#07c", lightgray: "#eee" }
 fontSizes: Array [ 12, 14, 16, … ]
 fonts: Array [ "-apple-system, BlinkMacSystemFont, sans-serif" ]
 primary: "red"
 space: Array [ 0, 4, 8, … ]
 __proto__: Object { … }
 __proto__: Object { … }
 */
let make = children =>
  ReactFela.createComponent(
    ~rule=title,
    ~baseElement=`String("h1"),
    ~props=Js.Obj.empty(),
    children,
  );