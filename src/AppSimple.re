/* [%bs.raw {|require('./toolbox/theme.json')|}]; */
[@bs.module] external theme : Js.t({..}) = "./theme.json";

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <ReactFela.Provider>
      <div>
        <ReactFela.ThemeProvider key="componentWithTheme" theme>
          ...<ComponentWithTheme />
        </ReactFela.ThemeProvider>
        /* </div>
           <div> */
        <ReactFela.ThemeProvider key="themedTitleSimple" theme>
          ...<ThemedTitleSimple> "I am green and big" </ThemedTitleSimple>
        </ReactFela.ThemeProvider>
      </div>
    </ReactFela.Provider>,
};