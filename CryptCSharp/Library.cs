using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Cryptography
{
    public static class AES
    {
        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
         static extern string AESEncrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string AESDecrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        public static string Encrypt(string Text, string CipherKey, string IvKey)
        {
            return AESEncrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }

        public static string Decrypt(string Text, string CipherKey, string IvKey)
        {
            return AESDecrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }
    }

    public static class RC6
    {
        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string RC6Encrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string RC6Decrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        public static string Encrypt(string Text, string CipherKey, string IvKey)
        {
            return RC6Encrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }

        public static string Decrypt(string Text, string CipherKey, string IvKey)
        {
            return RC6Decrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }
    }

    public static class MARS
    {
        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string MARSEncrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string MARSDecrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        public static string Encrypt(string Text, string CipherKey, string IvKey)
        {
            return MARSEncrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }

        public static string Decrypt(string Text, string CipherKey, string IvKey)
        {
            return MARSDecrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }
    }

    public static class TWOFISH
    {
        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string TWOFISHEncrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string TWOFISHDecrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        public static string Encrypt(string Text, string CipherKey, string IvKey)
        {
            return TWOFISHEncrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }

        public static string Decrypt(string Text, string CipherKey, string IvKey)
        {
            return TWOFISHDecrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }
    }

    public static class SERPENT
    {
        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string SERPENTEncrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string SERPENTDecrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        public static string Encrypt(string Text, string CipherKey, string IvKey)
        {
            return SERPENTEncrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }

        public static string Decrypt(string Text, string CipherKey, string IvKey)
        {
            return SERPENTDecrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }
    }

    public static class CAST256
    {
        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string CAST256Encrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        [DllImport("CryptoPP.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.StdCall)]
        [return: MarshalAs(UnmanagedType.LPStr)]
        static extern string CAST256Decrypt(byte[] Text, byte[] CipherKey, byte[] IvKey);

        public static string Encrypt(string Text, string CipherKey, string IvKey)
        {
            return CAST256Encrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }

        public static string Decrypt(string Text, string CipherKey, string IvKey)
        {
            return CAST256Decrypt(Encoding.ASCII.GetBytes(Text), Encoding.ASCII.GetBytes(CipherKey), Encoding.ASCII.GetBytes(IvKey));
        }
    }
}
