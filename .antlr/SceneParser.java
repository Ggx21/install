// Generated from /home/ggx/home/antlr_works/install/Scene.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class SceneParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, DRAW=3, WRITE=4, IN=5, AT=6, CIRCLE=7, SQUARE=8, SMALL=9, 
		MEDIUM=10, BIG=11, LEFT=12, RIGHT=13, CENTER=14, TOP=15, BOTTOM=16, STRING=17, 
		BLACK=18, BLUE=19, BROWN=20, GREEN=21, RED=22, ORANGE=23, PURPLE=24, YELLOW=25, 
		WHITE=26, NAME=27, NEWLINE=28, TAB=29, WHITESPACE=30;
	public static final int
		RULE_file = 0, RULE_name = 1, RULE_action = 2, RULE_size = 3, RULE_shape = 4, 
		RULE_color = 5, RULE_position = 6;
	private static String[] makeRuleNames() {
		return new String[] {
			"file", "name", "action", "size", "shape", "color", "position"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "','", "'draw'", "'write'", "'in'", "'at'", "'circle'", 
			"'square'", "'small'", "'medium'", "'big'", "'left'", "'right'", "'center'", 
			"'top'", "'bottom'", null, "'black'", "'blue'", "'brown'", "'green'", 
			"'red'", "'orange'", "'purple'", "'yellow'", "'white'", null, null, null, 
			"' '"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, "DRAW", "WRITE", "IN", "AT", "CIRCLE", "SQUARE", "SMALL", 
			"MEDIUM", "BIG", "LEFT", "RIGHT", "CENTER", "TOP", "BOTTOM", "STRING", 
			"BLACK", "BLUE", "BROWN", "GREEN", "RED", "ORANGE", "PURPLE", "YELLOW", 
			"WHITE", "NAME", "NEWLINE", "TAB", "WHITESPACE"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Scene.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public SceneParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FileContext extends ParserRuleContext {
		public ActionContext action;
		public List<ActionContext> elements = new ArrayList<ActionContext>();
		public TerminalNode EOF() { return getToken(SceneParser.EOF, 0); }
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(SceneParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(SceneParser.NEWLINE, i);
		}
		public List<TerminalNode> TAB() { return getTokens(SceneParser.TAB); }
		public TerminalNode TAB(int i) {
			return getToken(SceneParser.TAB, i);
		}
		public List<ActionContext> action() {
			return getRuleContexts(ActionContext.class);
		}
		public ActionContext action(int i) {
			return getRuleContext(ActionContext.class,i);
		}
		public FileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_file; }
	}

	public final FileContext file() throws RecognitionException {
		FileContext _localctx = new FileContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_file);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(14);
			name();
			setState(15);
			match(NEWLINE);
			setState(23);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TAB) {
				{
				{
				setState(16);
				match(TAB);
				setState(17);
				((FileContext)_localctx).action = action();
				((FileContext)_localctx).elements.add(((FileContext)_localctx).action);
				setState(19);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NEWLINE) {
					{
					setState(18);
					match(NEWLINE);
					}
				}

				}
				}
				setState(25);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
			setState(26);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NameContext extends ParserRuleContext {
		public TerminalNode NAME() { return getToken(SceneParser.NAME, 0); }
		public NameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_name; }
	}

	public final NameContext name() throws RecognitionException {
		NameContext _localctx = new NameContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(28);
			match(NAME);
			setState(29);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ActionContext extends ParserRuleContext {
		public TerminalNode DRAW() { return getToken(SceneParser.DRAW, 0); }
		public SizeContext size() {
			return getRuleContext(SizeContext.class,0);
		}
		public ShapeContext shape() {
			return getRuleContext(ShapeContext.class,0);
		}
		public TerminalNode IN() { return getToken(SceneParser.IN, 0); }
		public ColorContext color() {
			return getRuleContext(ColorContext.class,0);
		}
		public TerminalNode AT() { return getToken(SceneParser.AT, 0); }
		public PositionContext position() {
			return getRuleContext(PositionContext.class,0);
		}
		public TerminalNode WRITE() { return getToken(SceneParser.WRITE, 0); }
		public TerminalNode STRING() { return getToken(SceneParser.STRING, 0); }
		public ActionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_action; }
	}

	public final ActionContext action() throws RecognitionException {
		ActionContext _localctx = new ActionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_action);
		try {
			setState(47);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DRAW:
				enterOuterAlt(_localctx, 1);
				{
				setState(31);
				match(DRAW);
				setState(32);
				size();
				setState(33);
				shape();
				setState(34);
				match(IN);
				setState(35);
				color();
				setState(36);
				match(AT);
				setState(37);
				position();
				}
				break;
			case WRITE:
				enterOuterAlt(_localctx, 2);
				{
				setState(39);
				match(WRITE);
				setState(40);
				size();
				setState(41);
				match(STRING);
				setState(42);
				match(IN);
				setState(43);
				color();
				setState(44);
				match(AT);
				setState(45);
				position();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SizeContext extends ParserRuleContext {
		public TerminalNode SMALL() { return getToken(SceneParser.SMALL, 0); }
		public TerminalNode MEDIUM() { return getToken(SceneParser.MEDIUM, 0); }
		public TerminalNode BIG() { return getToken(SceneParser.BIG, 0); }
		public SizeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_size; }
	}

	public final SizeContext size() throws RecognitionException {
		SizeContext _localctx = new SizeContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_size);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(49);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 3584L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ShapeContext extends ParserRuleContext {
		public TerminalNode CIRCLE() { return getToken(SceneParser.CIRCLE, 0); }
		public TerminalNode SQUARE() { return getToken(SceneParser.SQUARE, 0); }
		public ShapeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shape; }
	}

	public final ShapeContext shape() throws RecognitionException {
		ShapeContext _localctx = new ShapeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_shape);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(51);
			_la = _input.LA(1);
			if ( !(_la==CIRCLE || _la==SQUARE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ColorContext extends ParserRuleContext {
		public TerminalNode BLACK() { return getToken(SceneParser.BLACK, 0); }
		public TerminalNode BLUE() { return getToken(SceneParser.BLUE, 0); }
		public TerminalNode BROWN() { return getToken(SceneParser.BROWN, 0); }
		public TerminalNode GREEN() { return getToken(SceneParser.GREEN, 0); }
		public TerminalNode RED() { return getToken(SceneParser.RED, 0); }
		public TerminalNode ORANGE() { return getToken(SceneParser.ORANGE, 0); }
		public TerminalNode PURPLE() { return getToken(SceneParser.PURPLE, 0); }
		public TerminalNode YELLOW() { return getToken(SceneParser.YELLOW, 0); }
		public TerminalNode WHITE() { return getToken(SceneParser.WHITE, 0); }
		public ColorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_color; }
	}

	public final ColorContext color() throws RecognitionException {
		ColorContext _localctx = new ColorContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_color);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(53);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 133955584L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PositionContext extends ParserRuleContext {
		public Token x;
		public Token y;
		public TerminalNode LEFT() { return getToken(SceneParser.LEFT, 0); }
		public List<TerminalNode> CENTER() { return getTokens(SceneParser.CENTER); }
		public TerminalNode CENTER(int i) {
			return getToken(SceneParser.CENTER, i);
		}
		public TerminalNode RIGHT() { return getToken(SceneParser.RIGHT, 0); }
		public TerminalNode TOP() { return getToken(SceneParser.TOP, 0); }
		public TerminalNode BOTTOM() { return getToken(SceneParser.BOTTOM, 0); }
		public PositionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_position; }
	}

	public final PositionContext position() throws RecognitionException {
		PositionContext _localctx = new PositionContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_position);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			((PositionContext)_localctx).x = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 28672L) != 0)) ) {
				((PositionContext)_localctx).x = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(56);
			match(T__1);
			setState(57);
			((PositionContext)_localctx).y = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 114688L) != 0)) ) {
				((PositionContext)_localctx).y = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u001e<\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0003\u0000\u0014\b\u0000\u0005\u0000\u0016"+
		"\b\u0000\n\u0000\f\u0000\u0019\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0003\u00020\b\u0002\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0000\u0000\u0007\u0000\u0002\u0004\u0006\b\n\f\u0000\u0005"+
		"\u0001\u0000\t\u000b\u0001\u0000\u0007\b\u0001\u0000\u0012\u001a\u0001"+
		"\u0000\f\u000e\u0001\u0000\u000e\u00107\u0000\u000e\u0001\u0000\u0000"+
		"\u0000\u0002\u001c\u0001\u0000\u0000\u0000\u0004/\u0001\u0000\u0000\u0000"+
		"\u00061\u0001\u0000\u0000\u0000\b3\u0001\u0000\u0000\u0000\n5\u0001\u0000"+
		"\u0000\u0000\f7\u0001\u0000\u0000\u0000\u000e\u000f\u0003\u0002\u0001"+
		"\u0000\u000f\u0017\u0005\u001c\u0000\u0000\u0010\u0011\u0005\u001d\u0000"+
		"\u0000\u0011\u0013\u0003\u0004\u0002\u0000\u0012\u0014\u0005\u001c\u0000"+
		"\u0000\u0013\u0012\u0001\u0000\u0000\u0000\u0013\u0014\u0001\u0000\u0000"+
		"\u0000\u0014\u0016\u0001\u0000\u0000\u0000\u0015\u0010\u0001\u0000\u0000"+
		"\u0000\u0016\u0019\u0001\u0000\u0000\u0000\u0017\u0015\u0001\u0000\u0000"+
		"\u0000\u0017\u0018\u0001\u0000\u0000\u0000\u0018\u001a\u0001\u0000\u0000"+
		"\u0000\u0019\u0017\u0001\u0000\u0000\u0000\u001a\u001b\u0005\u0000\u0000"+
		"\u0001\u001b\u0001\u0001\u0000\u0000\u0000\u001c\u001d\u0005\u001b\u0000"+
		"\u0000\u001d\u001e\u0005\u0001\u0000\u0000\u001e\u0003\u0001\u0000\u0000"+
		"\u0000\u001f \u0005\u0003\u0000\u0000 !\u0003\u0006\u0003\u0000!\"\u0003"+
		"\b\u0004\u0000\"#\u0005\u0005\u0000\u0000#$\u0003\n\u0005\u0000$%\u0005"+
		"\u0006\u0000\u0000%&\u0003\f\u0006\u0000&0\u0001\u0000\u0000\u0000\'("+
		"\u0005\u0004\u0000\u0000()\u0003\u0006\u0003\u0000)*\u0005\u0011\u0000"+
		"\u0000*+\u0005\u0005\u0000\u0000+,\u0003\n\u0005\u0000,-\u0005\u0006\u0000"+
		"\u0000-.\u0003\f\u0006\u0000.0\u0001\u0000\u0000\u0000/\u001f\u0001\u0000"+
		"\u0000\u0000/\'\u0001\u0000\u0000\u00000\u0005\u0001\u0000\u0000\u0000"+
		"12\u0007\u0000\u0000\u00002\u0007\u0001\u0000\u0000\u000034\u0007\u0001"+
		"\u0000\u00004\t\u0001\u0000\u0000\u000056\u0007\u0002\u0000\u00006\u000b"+
		"\u0001\u0000\u0000\u000078\u0007\u0003\u0000\u000089\u0005\u0002\u0000"+
		"\u00009:\u0007\u0004\u0000\u0000:\r\u0001\u0000\u0000\u0000\u0003\u0013"+
		"\u0017/";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}