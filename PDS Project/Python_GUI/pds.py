import sys
from PyQt4 import QtGui, QtCore

class Window (QtGui.QMainWindow):

    def __init__(self):
        super(Window,self).__init__()
        self.setGeometry(50,50,500,300)
        self.setWindowTitle("PyQT Dude!")
        self.setWindowIcon(QtGui.QIcon('python.png'))

        extractAction = QtGui.QAction("&GET THE CHOPPER!", self)
        extractAction.setShortcut("Ctrl+Q")
        extractAction.setStatusTip("Leave the App")
        extractAction.triggered.connect(self.close_application)

        openEditor = QtGui.QAction("&Editor", self)
        openEditor.setShortcut("Control+E")
        openEditor.setStatusTip("Open Editor")
        openEditor.triggered.connect(self.editor)

        openFile = QtGui.QAction("&Open File", self)
        openFile.setShortcut("Control+O")
        openFile.setStatusTip("Open File")
        openFile.triggered.connect(self.file_open)

        self.statusBar()

        #creates a Main Menu and adds stuff to it
        mainMenu = self.menuBar()

        fileMenu = mainMenu.addMenu('&File') #On the Main Menu, add a Menu called File
        fileMenu.addAction(extractAction)
        fileMenu.addAction(openFile)


        editorMenu = mainMenu.addMenu("&Editor") #On the Main Menu, add a Menu called Editor
        editorMenu.addAction(openEditor)

        self.home()

    def home(self):

        #Creating a button
        btn = QtGui.QPushButton("Quit", self)
        btn.clicked.connect(self.close_application)
        btn.resize(100,100)
        btn.move(100,100)

        #Creating an Action to put int the toolbar
        extractAction = QtGui.QAction(QtGui.QIcon('python.png'), 'Flee the scene', self)
        extractAction.triggered.connect(self.close_application)

        #Configuring toolbar
        self.toolbar = self.addToolBar("Extraction")
        self.toolbar.addAction(extractAction)

        #Configurind a CheckBar
        checkBox = QtGui.QCheckBox('Enarlge Window', self)
        checkBox.move(100,25)
        checkBox.toggle()
        checkBox.stateChanged.connect(self.enlarge_window)

        #Creating Progress Bar
        self.progress = QtGui.QProgressBar(self)
        self.progress.setGeometry(200,80,250,20)

        self.btn = QtGui.QPushButton("Download",self) #Name pushbutton as Donwload in the class itself
        self.btn.move(200,120) #move the button to 200,120
        self.btn.clicked.connect(self.download) #When the button is clicked, call the method download insite itself

        self.styleChoice = QtGui.QLabel("Linux Ubuntu", self)

        comboBox = QtGui.QComboBox(self)
        comboBox.addItem("DUDE")
        comboBox.addItem("wINDOW")
        comboBox.addItem("MacOSX")

        comboBox.move(50, 250)
        self.styleChoice.move(50,150)
        comboBox.activated[str].connect(self.style_choice)

        #Show itself, the Window
        self.show()

    def file_open(self):
        name = QtGui.QFileDialog.getOpenFileName(self, 'Open File')
        file = open(name,'r')

        self.editor()

        with file:
            text = file.read()
            self.textEdit.setText(text)

    def style_choice(self):
        self.style_choice.setText(text)
        QtGui.QApplication.setStyle(QtGui.QStyleFactory.create(text))

    def download(self):
        self.completed = 0
        while self.completed <100:
            self.completed += 0.0001
            self.progress.setValue(self.completed)

    def enlarge_window (self, state):
        if state == QtCore.Qt.Checked:
            self.setGeometry(50,50, 1000, 600)
        else:
            self.setGeometry(50,50,500,300)
    def editor(self):
        self.textEdit = QtGui.QTextEdit()
        self.setCentralWidget(self.textEdit)

    def close_application(self):
        choice = QtGui.QMessageBox.question(self, 'Extract!', "Get into the chopper!", QtGui.QMessageBox.Yes | QtGui.QMessageBox.No)
        if choice == QtGui.QMessageBox.Yes:
            print("GO NOWWWWWWWW!!!!!")
            sys.exit()
        else:
            pass

def run():
    app=QtGui.QApplication([])
    GUI = Window()
    sys.exit(app.exec_())
run()
