namespace HTML {

    template <class P>
    class html : public P {
        const std::string _open = "<html>";
        const std::string _end = "</html>";
    public:
        std::string operator()() const {
            auto child = P();
            return _open + child() + _end; 
        }
    };

    template <class P>
    class body : public P {
        const std::string _open = "<body>";
        const std::string _end = "</body>";
    public:
        std::string operator()() const {
            auto child = P();
            return _open + child() + _end; 
        }
    };

    template <char... str>
    class p {
        const std::string _open = "<p>";
        const std::string _end = "</p>";
    public:
        std::string operator()() const {
            std::string text = {str...};
            return _open + text + _end; 
        }
    };
};
