/* [%bs.raw {|require('./toolbox/theme.json')|}]; */
[@bs.module] external theme : Js.t({..}) = "./theme.json";

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <ReactFela.Provider>
      <div>
        <ExampleGroup title="ThemeProvider">
          <ReactFela.ThemeProvider
            key="themedText" theme={"color": "blue", "fontSize": "15px"}>
            ...<div>
                 <ThemedText> "I am blue and 15px sized" </ThemedText>
                 <ReactFela.ThemeProvider
                   overwrite=true theme={"fontSize": "20px"}>
                   ...<ThemedText> "I am red and 20px sized" </ThemedText>
                 </ReactFela.ThemeProvider>
               </div>
          </ReactFela.ThemeProvider>
        </ExampleGroup>
        <ExampleGroup title="withTheme">
          <ReactFela.ThemeProvider key="componentWithTheme" theme>
            ...<ComponentWithTheme />
          </ReactFela.ThemeProvider>
        </ExampleGroup>
        <ExampleGroup title="connect">
          <ConnectedHeader
            key="connectedHeader"
            title="Hello World"
            color="red"
            size="17px"
          />
          <ReactFela.ThemeProvider
            key="connectedHeader2" theme=ConnectedHeader2.theme>
            ...<ConnectedHeader2 title="Hello World" />
          </ReactFela.ThemeProvider>
        </ExampleGroup>
      </div>
    </ReactFela.Provider>,
};